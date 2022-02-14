
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {int * path; scalar_t__ read_index; scalar_t__ write_index; int msglim_count; int read_ready; int iucv_connected; int iucv_severed; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct mon_private* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct mon_private *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (!VAR_2)
  return 0;
 if (VAR_2->path) {
  VAR_3 = FUNC_3(VAR_2->path, VAR_0);
  if (VAR_3)
   FUNC_4("Disconnecting the z/VM *MONITOR system "
       "service failed with rc=%i\n", VAR_3);
  FUNC_2(VAR_2->path);
 }
 FUNC_0(&VAR_2->iucv_severed, 0);
 FUNC_0(&VAR_2->iucv_connected, 0);
 FUNC_0(&VAR_2->read_ready, 0);
 FUNC_0(&VAR_2->msglim_count, 0);
 VAR_2->write_index = 0;
 VAR_2->read_index = 0;
 VAR_2->path = ((void*)0);
 return 0;
}
