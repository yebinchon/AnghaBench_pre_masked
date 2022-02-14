
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* j_decompress_ptr ;
typedef int boolean ;
struct TYPE_6__ {int unread_marker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int,int ,int,int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*) ;

boolean
FUNC_3 (j_decompress_ptr VAR_7, int VAR_8)
{
  int VAR_9 = VAR_7->unread_marker;
  int VAR_10 = 1;


  FUNC_1(VAR_7, VAR_2, VAR_9, VAR_8);


  for (;;) {
    if (VAR_9 < (int) VAR_5)
      VAR_10 = 2;
    else if (VAR_9 < (int) VAR_3 || VAR_9 > (int) VAR_4)
      VAR_10 = 3;
    else {
      if (VAR_9 == ((int) VAR_3 + ((VAR_8+1) & 7)) ||
   VAR_9 == ((int) VAR_3 + ((VAR_8+2) & 7)))
 VAR_10 = 3;
      else if (VAR_9 == ((int) VAR_3 + ((VAR_8-1) & 7)) ||
        VAR_9 == ((int) VAR_3 + ((VAR_8-2) & 7)))
 VAR_10 = 2;
      else
 VAR_10 = 1;
    }
    FUNC_0(VAR_7, 4, VAR_1, VAR_9, VAR_10);
    switch (VAR_10) {
    case 1:

      VAR_7->unread_marker = 0;
      return VAR_6;
    case 2:

      if (! FUNC_2(VAR_7))
 return VAR_0;
      VAR_9 = VAR_7->unread_marker;
      break;
    case 3:


      return VAR_6;
    }
  }
}
