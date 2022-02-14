
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct fd_dev {int fd_dev_id; char* fd_dev_name; int fbd_flags; int fd_dev_size; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct fd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct se_device *VAR_1, char *VAR_2)
{
 struct fd_dev *VAR_3 = FUNC_0(VAR_1);
 ssize_t VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_2 + VAR_4, "TCM FILEIO ID: %u", VAR_3->fd_dev_id);
 VAR_4 += FUNC_1(VAR_2 + VAR_4, "        File: %s  Size: %llu  Mode: %s\n",
  VAR_3->fd_dev_name, VAR_3->fd_dev_size,
  (VAR_3->fbd_flags & VAR_0) ?
  "Buffered-WCE" : "O_DSYNC");
 return VAR_4;
}
