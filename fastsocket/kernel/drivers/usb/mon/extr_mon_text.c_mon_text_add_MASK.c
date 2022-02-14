
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int busnum; } ;
struct mon_bus {struct dentry* dent_t; struct dentry* dent_u; struct dentry* dent_s; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char*,int,int ,struct mon_bus*,int *) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int,char*,int) ;

int FUNC_3(struct mon_bus *VAR_4, const struct usb_bus *VAR_5)
{
 struct dentry *VAR_6;
 enum { NAMESZ = 10 };
 char VAR_7[NAMESZ];
 int VAR_8 = VAR_5? VAR_5->busnum: 0;
 int VAR_9;

 if (VAR_5 != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_7, NAMESZ, "%dt", VAR_8);
  if (VAR_9 <= 0 || VAR_9 >= NAMESZ)
   goto err_print_t;
  VAR_6 = FUNC_0(VAR_7, 0600, VAR_0, VAR_4,
            &VAR_2);
  if (VAR_6 == ((void*)0))
   goto err_create_t;
  VAR_4->dent_t = VAR_6;
 }

 VAR_9 = FUNC_2(VAR_7, NAMESZ, "%du", VAR_8);
 if (VAR_9 <= 0 || VAR_9 >= NAMESZ)
  goto err_print_u;
 VAR_6 = FUNC_0(VAR_7, 0600, VAR_0, VAR_4, &VAR_3);
 if (VAR_6 == ((void*)0))
  goto err_create_u;
 VAR_4->dent_u = VAR_6;

 VAR_9 = FUNC_2(VAR_7, NAMESZ, "%ds", VAR_8);
 if (VAR_9 <= 0 || VAR_9 >= NAMESZ)
  goto err_print_s;
 VAR_6 = FUNC_0(VAR_7, 0600, VAR_0, VAR_4, &VAR_1);
 if (VAR_6 == ((void*)0))
  goto err_create_s;
 VAR_4->dent_s = VAR_6;

 return 1;

err_create_s:
err_print_s:
 FUNC_1(VAR_4->dent_u);
 VAR_4->dent_u = ((void*)0);
err_create_u:
err_print_u:
 if (VAR_5 != ((void*)0)) {
  FUNC_1(VAR_4->dent_t);
  VAR_4->dent_t = ((void*)0);
 }
err_create_t:
err_print_t:
 return 0;
}
