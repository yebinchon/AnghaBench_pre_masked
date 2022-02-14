
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_chan {char* dev; int tt; scalar_t__ raw; int kernel_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1, int VAR_2, void *VAR_3,
       char **VAR_4)
{
 struct port_chan *VAR_5 = VAR_3;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_5->kernel_data);
 if ((VAR_6 >= 0) && VAR_5->raw) {
  FUNC_0(VAR_7 = FUNC_3(VAR_6, &VAR_5->tt));
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_2(VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 *VAR_4 = VAR_5->dev;
 return VAR_6;
}
