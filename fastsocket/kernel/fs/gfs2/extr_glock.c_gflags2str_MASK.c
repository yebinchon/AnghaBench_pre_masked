
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_glock {unsigned long gl_flags; scalar_t__ gl_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ,unsigned long const*) ;

__attribute__((used)) static const char *FUNC_1(char *VAR_13, const struct gfs2_glock *VAR_14)
{
 const unsigned long *VAR_15 = &VAR_14->gl_flags;
 char *VAR_16 = VAR_13;

 if (FUNC_0(VAR_8, VAR_15))
  *VAR_16++ = 'l';
 if (FUNC_0(VAR_1, VAR_15))
  *VAR_16++ = 'D';
 if (FUNC_0(VAR_10, VAR_15))
  *VAR_16++ = 'd';
 if (FUNC_0(VAR_2, VAR_15))
  *VAR_16++ = 'p';
 if (FUNC_0(VAR_3, VAR_15))
  *VAR_16++ = 'y';
 if (FUNC_0(VAR_7, VAR_15))
  *VAR_16++ = 'f';
 if (FUNC_0(VAR_6, VAR_15))
  *VAR_16++ = 'i';
 if (FUNC_0(VAR_12, VAR_15))
  *VAR_16++ = 'r';
 if (FUNC_0(VAR_5, VAR_15))
  *VAR_16++ = 'I';
 if (FUNC_0(VAR_4, VAR_15))
  *VAR_16++ = 'F';
 if (FUNC_0(VAR_11, VAR_15))
  *VAR_16++ = 'q';
 if (FUNC_0(VAR_9, VAR_15))
  *VAR_16++ = 'L';
 if (VAR_14->gl_object)
  *VAR_16++ = 'o';
 if (FUNC_0(VAR_0, VAR_15))
  *VAR_16++ = 'b';
 *VAR_16 = 0;
 return VAR_13;
}
