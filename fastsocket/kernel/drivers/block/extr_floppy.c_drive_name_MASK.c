
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct floppy_struct {char const* name; } ;
struct TYPE_2__ {int native_format; } ;


 TYPE_1__* VAR_0 ;
 struct floppy_struct* VAR_1 ;

__attribute__((used)) static inline const char *FUNC_0(int VAR_2, int VAR_3)
{
 struct floppy_struct *VAR_4;

 if (VAR_2)
  VAR_4 = VAR_1 + VAR_2;
 else {
  if (VAR_0->native_format)
   VAR_4 = VAR_1 + VAR_0->native_format;
  else
   return "(null)";
 }
 if (VAR_4->name)
  return VAR_4->name;
 else
  return "(null)";
}
