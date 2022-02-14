
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct port*,struct scatterlist*,int,int,void*,int) ;
 int FUNC_1 (int ,char const*,int) ;
 struct port* FUNC_2 (int ) ;
 int FUNC_3 (struct scatterlist*,char const*,int) ;
 scalar_t__ FUNC_4 (int (*) (int ,char const*,int)) ;

__attribute__((used)) static int FUNC_5(u32 VAR_1, const char *VAR_2, int VAR_3)
{
 struct port *VAR_4;
 struct scatterlist VAR_5[1];

 if (FUNC_4(FUNC_1))
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_5, VAR_2, VAR_3);
 return FUNC_0(VAR_4, VAR_5, 1, VAR_3, (void *)VAR_2, 0);
}
