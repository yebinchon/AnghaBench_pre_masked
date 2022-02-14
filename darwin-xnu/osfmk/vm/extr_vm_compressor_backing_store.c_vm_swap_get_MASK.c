
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct swapfile {int swp_flags; scalar_t__ swp_io_count; int swp_vp; } ;
typedef int kern_return_t ;
typedef int event_t ;
typedef TYPE_2__* c_segment_t ;
struct TYPE_6__ {scalar_t__ c_buffer; } ;
struct TYPE_7__ {TYPE_1__ c_store; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int VAR_10 ;
 int FUNC_7 (int) ;
 int VAR_11 ;
 struct swapfile* FUNC_8 (int) ;
 int FUNC_9 (int ,int,int,int,int ,int *) ;

kern_return_t
FUNC_10(c_segment_t VAR_12, uint64_t VAR_13, uint64_t VAR_14)
{
 struct swapfile *VAR_15 = ((void*)0);
 uint64_t VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_3(VAR_12->c_store.c_buffer);

 FUNC_4(&VAR_10);

 VAR_15 = FUNC_8(VAR_13);

 if (VAR_15 == ((void*)0) || ( !(VAR_15->swp_flags & VAR_5) && !(VAR_15->swp_flags & VAR_6))) {
  VAR_17 = 1;
  goto done;
 }
 VAR_15->swp_io_count++;

 FUNC_5(&VAR_10);




 VAR_16 = (VAR_13 & VAR_7);
 VAR_17 = FUNC_9(VAR_15->swp_vp, VAR_16, (uint64_t)VAR_12->c_store.c_buffer, (int)(VAR_14 / VAR_3), VAR_4, ((void*)0));




 if (VAR_17 == 0)
  FUNC_2(VAR_9, VAR_14 >> VAR_2);
 else
  VAR_11++;




 FUNC_7(VAR_13);

 FUNC_4(&VAR_10);
 VAR_15->swp_io_count--;

 if ((VAR_15->swp_flags & VAR_8) && VAR_15->swp_io_count == 0) {

  VAR_15->swp_flags &= ~VAR_8;
  FUNC_6((event_t) &VAR_15->swp_flags);
 }
done:
 FUNC_5(&VAR_10);

 if (VAR_17 == 0)
  return VAR_1;
 else
  return VAR_0;
}
