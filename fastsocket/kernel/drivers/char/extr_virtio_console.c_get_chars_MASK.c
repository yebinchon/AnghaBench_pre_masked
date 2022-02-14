
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port {int in_vq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct port*,char*,int,int) ;
 struct port* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(u32 VAR_2, char *VAR_3, int VAR_4)
{
 struct port *VAR_5;


 if (FUNC_3(VAR_1))
  return 0;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return -VAR_0;


 FUNC_0(!VAR_5->in_vq);

 return FUNC_1(VAR_5, VAR_3, VAR_4, 0);
}
