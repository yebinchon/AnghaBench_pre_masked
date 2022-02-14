
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct se_device {int dummy; } ;
struct fd_dev {int fbd_flags; int fd_dev_size; int fd_dev_name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int ,int *) ;
 char* FUNC_10 (char**,char*) ;
 int VAR_8 ;

__attribute__((used)) static ssize_t FUNC_11(struct se_device *VAR_9,
  const char *VAR_10, ssize_t VAR_11)
{
 struct fd_dev *VAR_12 = FUNC_0(VAR_9);
 char *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 substring_t VAR_17[VAR_7];
 int VAR_18 = 0, VAR_19, VAR_20;

 VAR_16 = FUNC_2(VAR_10, VAR_6);
 if (!VAR_16)
  return -VAR_1;

 VAR_13 = VAR_16;

 while ((VAR_14 = FUNC_10(&VAR_16, ",\n")) != ((void*)0)) {
  if (!*VAR_14)
   continue;

  VAR_20 = FUNC_6(VAR_14, VAR_8, VAR_17);
  switch (VAR_20) {
  case 129:
   if (FUNC_5(VAR_12->fd_dev_name, &VAR_17[0],
    VAR_5) == 0) {
    VAR_18 = -VAR_0;
    break;
   }
   FUNC_7("FILEIO: Referencing Path: %s\n",
     VAR_12->fd_dev_name);
   VAR_12->fbd_flags |= VAR_2;
   break;
  case 128:
   VAR_15 = FUNC_4(&VAR_17[0]);
   if (!VAR_15) {
    VAR_18 = -VAR_1;
    break;
   }
   VAR_18 = FUNC_9(VAR_15, 0, &VAR_12->fd_dev_size);
   FUNC_1(VAR_15);
   if (VAR_18 < 0) {
    FUNC_8("strict_strtoull() failed for"
      " fd_dev_size=\n");
    goto out;
   }
   FUNC_7("FILEIO: Referencing Size: %llu"
     " bytes\n", VAR_12->fd_dev_size);
   VAR_12->fbd_flags |= VAR_3;
   break;
  case 130:
   FUNC_3(VAR_17, &VAR_19);
   if (VAR_19 != 1) {
    FUNC_8("bogus fd_buffered_io=%d value\n", VAR_19);
    VAR_18 = -VAR_0;
    goto out;
   }

   FUNC_7("FILEIO: Using buffered I/O"
    " operations for struct fd_dev\n");

   VAR_12->fbd_flags |= VAR_4;
   break;
  default:
   break;
  }
 }

out:
 FUNC_1(VAR_13);
 return (!VAR_18) ? VAR_11 : VAR_18;
}
