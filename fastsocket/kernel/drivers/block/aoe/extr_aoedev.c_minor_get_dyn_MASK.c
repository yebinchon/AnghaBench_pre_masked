
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(ulong *VAR_4)
{
 ulong VAR_5;
 ulong VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_3, VAR_5);
 VAR_6 = FUNC_0(VAR_2, VAR_1);
 if (VAR_6 < VAR_1)
  FUNC_1(VAR_6, VAR_2);
 else
  VAR_7 = -1;
 FUNC_3(&VAR_3, VAR_5);

 *VAR_4 = VAR_6 * VAR_0;
 return VAR_7;
}
