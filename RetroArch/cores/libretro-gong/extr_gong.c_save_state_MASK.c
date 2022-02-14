
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef unsigned int uint16_t ;
struct TYPE_24__ {TYPE_8__* buttons; } ;
struct TYPE_23__ {unsigned int half_transition_count; unsigned int ended_down; } ;
struct TYPE_22__ {unsigned int u; } ;
struct TYPE_21__ {unsigned int u; } ;
struct TYPE_20__ {unsigned int u; } ;
struct TYPE_19__ {unsigned int u; } ;
struct TYPE_18__ {unsigned int u; } ;
struct TYPE_17__ {unsigned int u; } ;
struct TYPE_16__ {unsigned int u; } ;
struct TYPE_15__ {unsigned int version; unsigned int player1_score; unsigned int player2_score; unsigned int is_initialized; unsigned int player2_human; TYPE_11__* player; TYPE_9__* g_input; int * previnput; TYPE_7__ current_play_points; TYPE_6__ ball_speed; TYPE_5__ ball_dpy; TYPE_4__ ball_dpx; TYPE_3__ ball_py; TYPE_2__ ball_px; TYPE_1__ player2_speed; } ;
struct TYPE_13__ {int u; } ;
struct TYPE_14__ {TYPE_10__ py; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_12__* VAR_2 ;
 int FUNC_0 (unsigned char*,...) ;
 unsigned int FUNC_1 (int ) ;
 void* FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, size_t VAR_4)
{
   int VAR_5 = 0;
   int VAR_6 = 0;
   unsigned char *VAR_7 = (unsigned char*)VAR_3;
   unsigned VAR_8 = FUNC_2(VAR_2->version);
   unsigned VAR_9 = FUNC_2(VAR_2->player1_score);
   unsigned VAR_10 = FUNC_2(VAR_2->player2_score);
   unsigned VAR_11 = FUNC_2(VAR_2->player2_speed.u);
   unsigned VAR_12 = FUNC_2(VAR_2->ball_px.u);
   unsigned VAR_13 = FUNC_2(VAR_2->ball_py.u);
   unsigned VAR_14 = FUNC_2(VAR_2->ball_dpx.u);
   unsigned VAR_15 = FUNC_2(VAR_2->ball_dpy.u);
   unsigned VAR_16 = FUNC_2(VAR_2->ball_speed.u);
   unsigned VAR_17 = FUNC_2(VAR_2->current_play_points.u);
   unsigned VAR_18 = VAR_2->is_initialized;
   unsigned VAR_19 = VAR_2->player2_human;

   (void)VAR_4;

   FUNC_0(VAR_7, &VAR_8, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_9, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_10, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_11, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_12, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_13, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_14, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_15, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_16, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_17, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_18, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);

   FUNC_0(VAR_7, &VAR_19, sizeof(unsigned));
   VAR_7 += sizeof(unsigned);


   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      uint16_t VAR_20 = FUNC_1(VAR_2->previnput[VAR_5]);
      FUNC_0(VAR_7, &VAR_20, sizeof(uint16_t));
      VAR_7 += sizeof(uint16_t);
   }


   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
      {
         int VAR_21 = FUNC_2(VAR_2->g_input[VAR_5].buttons[VAR_6].half_transition_count);
         unsigned VAR_22 = VAR_2->g_input[VAR_5].buttons[VAR_6].ended_down;

         FUNC_0(VAR_7, &VAR_21, sizeof(int));
         VAR_7 += sizeof(int);

         FUNC_0(VAR_7, &VAR_22, sizeof(unsigned));
         VAR_7 += sizeof(unsigned);
      }
   }


   for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   {
      unsigned VAR_23 = FUNC_2((unsigned)VAR_2->player[VAR_5].py.u);

      FUNC_0(VAR_7, &VAR_23, sizeof(unsigned));
      VAR_7 += sizeof(uint16_t);
   }
}
