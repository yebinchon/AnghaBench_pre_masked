
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;
typedef int connectedareas ;


 int FUNC_0 (int*,int,int*,int ) ;
 int FUNC_1 (int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_2(int *VAR_3, int VAR_4)
{
 int VAR_5[VAR_0], VAR_6;

 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 if (VAR_4 < 1) return VAR_1;
 if (VAR_4 == 1) return VAR_2;
 FUNC_0(VAR_3, VAR_4, VAR_5, 0);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  if (!VAR_5[VAR_6]) return VAR_1;
 }
 return VAR_2;
}
