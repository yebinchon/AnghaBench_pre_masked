
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size_comment; } ;
struct TYPE_4__ {TYPE_1__ gi; int file; scalar_t__ central_pos; } ;
typedef TYPE_2__ unz_s ;
typedef int * unzFile ;
typedef scalar_t__ uLong ;
typedef int uInt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;

extern int FUNC_2 (unzFile VAR_3, char *VAR_4, uLong VAR_5)
{
 unz_s* VAR_6;
 uLong VAR_7 ;
 if (VAR_3==((void*)0))
  return VAR_2;
 VAR_6=(unz_s*)VAR_3;

 VAR_7 = VAR_5;
 if (VAR_7>VAR_6->gi.size_comment)
  VAR_7 = VAR_6->gi.size_comment;

 if (FUNC_1(VAR_6->file,VAR_6->central_pos+22,VAR_0)!=0)
  return VAR_1;

 if (VAR_7>0)
    {
      *VAR_4='\0';
   if (FUNC_0(VAR_4,(uInt)VAR_7,1,VAR_6->file)!=1)
  return VAR_1;
    }

 if ((VAR_4 != ((void*)0)) && (VAR_5 > VAR_6->gi.size_comment))
  *(VAR_4+VAR_6->gi.size_comment)='\0';
 return (int)VAR_7;
}
