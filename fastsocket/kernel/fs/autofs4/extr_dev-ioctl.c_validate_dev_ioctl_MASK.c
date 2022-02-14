
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_dev_ioctl {int size; int path; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,struct autofs_dev_ioctl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(int VAR_0, struct autofs_dev_ioctl *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0("invalid device control module version "
       "supplied for cmd(0x%08x)", VAR_0);
  goto out;
 }

 if (VAR_1->size > sizeof(*VAR_1)) {
  VAR_2 = FUNC_3(VAR_1->path, VAR_1->size - sizeof(*VAR_1));
  if (VAR_2) {
   FUNC_0(
     "path string terminator missing for cmd(0x%08x)",
     VAR_0);
   goto out;
  }

  VAR_2 = FUNC_2(VAR_1->path);
  if (VAR_2) {
   FUNC_0("invalid path supplied for cmd(0x%08x)",
        VAR_0);
   goto out;
  }
 }

 VAR_2 = 0;
out:
 return VAR_2;
}
