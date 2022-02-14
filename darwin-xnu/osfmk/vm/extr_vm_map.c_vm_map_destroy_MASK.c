
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* vm_map_t ;
struct TYPE_13__ {int lck_attr_val; } ;
struct TYPE_11__ {scalar_t__ nentries; } ;
struct TYPE_12__ {int min_offset; int max_offset; int s_lock; int lock; scalar_t__ pmap; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int,int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_9 (int ,TYPE_2__*) ;

void
FUNC_10(
 vm_map_t VAR_8,
 int VAR_9)
{
 FUNC_7(VAR_8);


 VAR_9 |= VAR_4;

 VAR_9 |= VAR_3;

 VAR_9 |= VAR_2;


 (void) FUNC_5(VAR_8, VAR_8->min_offset, VAR_8->max_offset,
        VAR_9, VAR_1);


 (void) FUNC_5(VAR_8, 0x0, 0xFFFFFFFFFFFFF000ULL,
        VAR_9, VAR_1);


 FUNC_6(VAR_8);
 FUNC_4(VAR_8);

 FUNC_8(VAR_8);

 FUNC_0(VAR_8->hdr.nentries == 0);

 if(VAR_8->pmap)
  FUNC_3(VAR_8->pmap);

 if (VAR_5.lck_attr_val & VAR_0) {
 } else {
  FUNC_2(&(VAR_8)->lock, &VAR_6);
  FUNC_1(&(VAR_8)->s_lock, &VAR_6);
 }

 FUNC_9(VAR_7, VAR_8);
}
