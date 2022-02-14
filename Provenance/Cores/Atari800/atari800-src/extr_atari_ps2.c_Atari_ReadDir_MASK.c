
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hour; int month; int day; int year; int sec; } ;
struct TYPE_5__ {int attrFile; TYPE_1__ _modify; scalar_t__ fileSizeByte; int name; } ;
typedef TYPE_2__ mcTable ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_1 (char*,char*,int,int,int,int,int,char) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(char *VAR_8, char *VAR_9, int *VAR_10,
                  int *VAR_11, int *VAR_12, char *VAR_13)
{
 const mcTable *VAR_14;
 if (VAR_4 >= VAR_5)
  return VAR_0;
 VAR_14 = VAR_7 + VAR_4;
 if (VAR_8 != ((void*)0))
  FUNC_0(VAR_8, VAR_6, VAR_14->name);
 if (VAR_9 != ((void*)0))
  FUNC_2(VAR_9, VAR_14->name);
 if (VAR_10 != ((void*)0))
  *VAR_10 = (VAR_14->attrFile & VAR_1) ? VAR_3 : VAR_0;
 if (VAR_11 != ((void*)0))
  *VAR_11 = (VAR_14->attrFile & VAR_2) ? VAR_0 : VAR_3;
 if (VAR_12 != ((void*)0))
  *VAR_12 = (int) (VAR_14->fileSizeByte);
 if (VAR_13 != ((void*)0)) {

  int VAR_15 = VAR_14->_modify.hour;
  char VAR_16 = 'a';
  if (VAR_15 >= 12) {
   VAR_15 -= 12;
   VAR_16 = 'p';
  }
  if (VAR_15 == 0)
   VAR_15 = 12;
  FUNC_1(VAR_13, "%2d-%02d-%02d %2d:%02d%c",
   VAR_14->_modify.month, VAR_14->_modify.day, VAR_14->_modify.year % 100, VAR_15, VAR_14->_modify.sec, VAR_16);
 }
 VAR_4++;
 return VAR_3;
}
