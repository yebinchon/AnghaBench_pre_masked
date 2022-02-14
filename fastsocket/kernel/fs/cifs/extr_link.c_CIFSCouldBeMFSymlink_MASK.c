
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_fattr {int cf_mode; scalar_t__ cf_eof; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

bool
FUNC_0(const struct cifs_fattr *VAR_2)
{
 if (!(VAR_2->cf_mode & VAR_1))

  return 0;

 if (VAR_2->cf_eof != VAR_0)

  return 0;

 return 1;
}
