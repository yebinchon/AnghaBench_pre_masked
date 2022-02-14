
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mon_private {int iucv_severed; } ;
struct iucv_path {struct mon_private* private; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct iucv_path*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iucv_path *VAR_2, u8 VAR_3[16])
{
 struct mon_private *VAR_4 = VAR_2->private;

 FUNC_2("z/VM *MONITOR system service disconnected with rc=%i\n",
        VAR_3[0]);
 FUNC_1(VAR_2, ((void*)0));
 FUNC_0(&VAR_4->iucv_severed, 1);
 FUNC_3(&VAR_0);
 FUNC_4(&VAR_1);
}
