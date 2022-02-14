
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_cmd {unsigned int nbytes; unsigned int nleft; int tf_flags; scalar_t__ last_xfer_len; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_1, struct ide_cmd *VAR_2)
{
 unsigned int VAR_3 = VAR_2->nbytes - VAR_2->nleft;

 if (VAR_2->tf_flags & VAR_0)
  VAR_3 -= VAR_2->last_xfer_len;

 if (VAR_3 > 0)
  FUNC_0(VAR_1, 0, VAR_3);
}
