
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int buffer_num; } ;
struct TYPE_9__ {int actions; int index; int buffers_in_transit; scalar_t__ buffers; scalar_t__ populated; TYPE_3__* mmal; int pool; scalar_t__ format_changed; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMALOMX_PORT_T ;
typedef int MMALOMX_COMPONENT_T ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_19 ;
 int FUNC_9 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_10(MMALOMX_COMPONENT_T *VAR_20,
   MMALOMX_PORT_T *VAR_21)
{
   uint32_t VAR_22 = 0;
   MMAL_STATUS_T VAR_23;

   FUNC_1(VAR_20, VAR_21);
   if (!VAR_21->actions)
   {
      FUNC_2(VAR_20, VAR_21);
      return;
   }

   if (VAR_21->actions & VAR_5)
   {
      VAR_21->actions &= ~VAR_5;
      VAR_21->actions |= VAR_11;
      VAR_22 |= VAR_11;
   }
   if ((VAR_21->actions & VAR_3) &&
       (!VAR_21->buffers_in_transit ||
        !(VAR_21->actions & VAR_2)))
   {
      VAR_21->actions &= ~VAR_3;
      VAR_21->actions |= VAR_9;
      VAR_22 |= VAR_9;
   }
   if ((VAR_21->actions & VAR_4) &&
       VAR_21->buffers)
   {





      VAR_21->actions &= ~VAR_4;
      VAR_21->actions |= VAR_10;
      VAR_22 |= VAR_10;
   }
   FUNC_2(VAR_20, VAR_21);

   if (VAR_22 & VAR_11)
      FUNC_6(VAR_21->mmal);

   if (VAR_22 & VAR_9)
   {
      FUNC_4(VAR_21->mmal);



      if (VAR_21->format_changed)
      {
         VAR_23 = FUNC_7(VAR_21->mmal);
         if (VAR_23 != VAR_13)
            FUNC_0("could not commit new format (%i)", VAR_23);
         VAR_21->format_changed = VAR_12;
      }
   }

   if (VAR_22 & VAR_10)
   {
      VAR_23 = FUNC_5(VAR_21->mmal, VAR_19);
      if (VAR_23 == VAR_13)
         VAR_23 = FUNC_3(VAR_21->pool, VAR_21->mmal->buffer_num, 0);
      if (VAR_23 != VAR_13)
         FUNC_9(VAR_20, VAR_18, FUNC_8(VAR_23), 0, ((void*)0));

   }

   FUNC_1(VAR_20, VAR_21);

   VAR_21->actions &= ~VAR_22;
   if ((VAR_21->actions & VAR_0) && VAR_21->populated)
      VAR_21->actions &= ~VAR_0;
   if ((VAR_21->actions & VAR_1) && !VAR_21->buffers)
      VAR_21->actions &= ~VAR_1;
   if ((VAR_21->actions & VAR_2) && !VAR_21->buffers_in_transit)
      VAR_21->actions &= ~VAR_2;
   VAR_22 = VAR_21->actions;

   if (VAR_21->actions == VAR_8 ||
       VAR_21->actions == VAR_7 ||
       VAR_21->actions == VAR_6)
      VAR_21->actions = 0;

   FUNC_2(VAR_20, VAR_21);

   if (VAR_22 == VAR_8)
      FUNC_9(VAR_20, VAR_17,
         VAR_14, VAR_21->index, ((void*)0));
   else if (VAR_22 == VAR_7)
      FUNC_9(VAR_20, VAR_17,
         VAR_16, VAR_21->index, ((void*)0));
   else if (VAR_22 == VAR_6)
      FUNC_9(VAR_20, VAR_17,
         VAR_15, VAR_21->index, ((void*)0));
}
