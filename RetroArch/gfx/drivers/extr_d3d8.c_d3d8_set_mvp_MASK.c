
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d_matrix {int dummy; } ;
typedef int LPDIRECT3DDEVICE8 ;
typedef int D3DMATRIX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct d3d_matrix*) ;
 int FUNC_2 (struct d3d_matrix*,void const*) ;

void FUNC_3(void *VAR_3, const void *VAR_4)
{
   struct d3d_matrix VAR_5;
   LPDIRECT3DDEVICE8 VAR_6 = (LPDIRECT3DDEVICE8)VAR_3;

   FUNC_1(&VAR_5);

   FUNC_0(VAR_6, VAR_0, (D3DMATRIX*)&VAR_5);
   FUNC_0(VAR_6, VAR_1, (D3DMATRIX*)&VAR_5);

   if (VAR_4)
      FUNC_2(&VAR_5, VAR_4);

   FUNC_0(VAR_6, VAR_2, (D3DMATRIX*)&VAR_5);
}
