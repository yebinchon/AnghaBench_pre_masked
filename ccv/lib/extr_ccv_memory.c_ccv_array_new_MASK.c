
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int type; int refcount; int rsize; scalar_t__ size; scalar_t__ data; scalar_t__ rnum; scalar_t__ sig; } ;
typedef TYPE_1__ ccv_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int*) ;
 scalar_t__ FUNC_3 (int,int) ;

ccv_array_t* FUNC_4(int VAR_4, int VAR_5, uint64_t VAR_6)
{
 ccv_array_t* VAR_7;
 if (VAR_3 && VAR_6 != 0)
 {
  uint8_t VAR_8;
  VAR_7 = (ccv_array_t*)FUNC_2(&VAR_2, VAR_6, &VAR_8);
  if (VAR_7)
  {
   FUNC_0(VAR_8 == 1);
   VAR_7->type |= VAR_0;
   VAR_7->refcount = 1;
   return VAR_7;
  }
 }
 VAR_7 = (ccv_array_t*)FUNC_1(sizeof(ccv_array_t));
 VAR_7->sig = VAR_6;
 VAR_7->type = VAR_1 & ~VAR_0;
 VAR_7->rnum = 0;
 VAR_7->rsize = VAR_4;
 VAR_7->size = FUNC_3(VAR_5, 2 );
 VAR_7->data = FUNC_1((size_t)VAR_7->size * (size_t)VAR_4);
 return VAR_7;
}
