
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int complete; int* data; int nbytes; int* reply; int reply_len; int reply_expected; } ;



 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (struct adb_request*) ;

__attribute__((used)) static int
FUNC_2(struct adb_request *VAR_11, int VAR_12)
{
    int VAR_13, VAR_14;

    if (!VAR_10)
    {
  VAR_11->complete = 1;
    return -VAR_2;
   }

    VAR_14 = -VAR_1;

    switch (VAR_11->data[0]) {
    case 128:
  for (VAR_13 = 0; VAR_13 < VAR_11->nbytes - 1; ++VAR_13)
   VAR_11->data[VAR_13] = VAR_11->data[VAR_13+1];
  --VAR_11->nbytes;
  if (VAR_9[VAR_11->data[0]][1] != 0) {
   VAR_11->reply[0] = VAR_0;
   VAR_11->reply_len = 1;
  } else
   VAR_11->reply_len = 0;
  VAR_14 = FUNC_1(VAR_11);
  break;
    case 131:
  switch (VAR_11->data[1]) {
  case 132:
   if (VAR_11->nbytes != 2)
    break;
   VAR_11->data[0] = VAR_5;
   VAR_11->nbytes = 1;
   VAR_11->reply_len = 3;
   VAR_11->reply[0] = 131;
   VAR_11->reply[1] = 0;
   VAR_11->reply[2] = 132;
   VAR_14 = FUNC_1(VAR_11);
   break;
  case 129:
   if (VAR_11->nbytes != 6)
    break;
   VAR_11->data[0] = VAR_6;
   VAR_11->nbytes = 5;
   for (VAR_13 = 1; VAR_13 <= 4; ++VAR_13)
    VAR_11->data[VAR_13] = VAR_11->data[VAR_13+1];
   VAR_11->reply_len = 3;
   VAR_11->reply[0] = 131;
   VAR_11->reply[1] = 0;
   VAR_11->reply[2] = 129;
   VAR_14 = FUNC_1(VAR_11);
   break;
  case 133:
   if (VAR_11->nbytes != 4)
    break;
   VAR_11->data[0] = VAR_4;
   VAR_11->data[1] = VAR_11->data[2];
   VAR_11->data[2] = VAR_11->data[3];
   VAR_11->nbytes = 3;
   VAR_11->reply_len = 3;
   VAR_11->reply[0] = 131;
   VAR_11->reply[1] = 0;
   VAR_11->reply[2] = 133;
   VAR_14 = FUNC_1(VAR_11);
   break;
  case 130:
   if (VAR_11->nbytes != 5)
    break;
   VAR_11->data[0] = VAR_7;
   VAR_11->data[1] = VAR_11->data[2];
   VAR_11->data[2] = VAR_11->data[3];
   VAR_11->data[3] = VAR_11->data[4];
   VAR_11->nbytes = 4;
   VAR_11->reply_len = 3;
   VAR_11->reply[0] = 131;
   VAR_11->reply[1] = 0;
   VAR_11->reply[2] = 130;
   VAR_14 = FUNC_1(VAR_11);
   break;
  }
  break;
    case 134:
  for (VAR_13 = VAR_11->nbytes - 1; VAR_13 > 1; --VAR_13)
   VAR_11->data[VAR_13+2] = VAR_11->data[VAR_13];
  VAR_11->data[3] = VAR_11->nbytes - 2;
  VAR_11->data[2] = VAR_8;

  VAR_11->data[0] = VAR_3;
  VAR_11->nbytes += 2;
  VAR_11->reply_expected = 1;
  VAR_11->reply_len = 0;
  VAR_14 = FUNC_1(VAR_11);
  break;
    }
    if (VAR_14)
    {
     VAR_11->complete = 1;
     return VAR_14;
    }

    if (VAR_12) {
 while (!VAR_11->complete)
  FUNC_0();
    }

    return 0;
}
