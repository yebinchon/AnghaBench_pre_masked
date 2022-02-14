
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int dummy; } ;
struct efx_filter_table {scalar_t__ id; unsigned int step; scalar_t__ offset; int * spec; int used; int used_bitmap; } ;
typedef int efx_oword_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,unsigned int) ;
 int FUNC_3 (struct efx_nic*,int *,scalar_t__) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_6(struct efx_nic *VAR_1,
      struct efx_filter_table *VAR_2,
      unsigned int VAR_3)
{
 static efx_oword_t VAR_4;

 if (VAR_2->id == VAR_0) {

  FUNC_2(VAR_1, VAR_3);
  FUNC_1(VAR_1);
 } else if (FUNC_5(VAR_3, VAR_2->used_bitmap)) {
  FUNC_0(VAR_3, VAR_2->used_bitmap);
  --VAR_2->used;
  FUNC_4(&VAR_2->spec[VAR_3], 0, sizeof(VAR_2->spec[0]));

  FUNC_3(VAR_1, &VAR_4,
      VAR_2->offset + VAR_2->step * VAR_3);
 }
}
