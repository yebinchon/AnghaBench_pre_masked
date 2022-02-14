
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint32_t ;
typedef size_t int32_t ;
struct TYPE_2__ {int msg_size; char* msg_bufc; int msg_bufx; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (char*) ;

int
FUNC_6(user_addr_t VAR_2, uint32_t VAR_3, int32_t * VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 int VAR_7 = 0, VAR_8, VAR_9;
 char *VAR_10, *VAR_11, *VAR_12, VAR_13;
 size_t VAR_14;

 FUNC_0();
 VAR_6 = (VAR_1->msg_size + 2);
 FUNC_1();


 if (!(VAR_10 = (char *)FUNC_3(VAR_6))) {
  FUNC_5("log_dmesg: unable to allocate memory\n");
  return (VAR_0);
 }


 FUNC_0();





 VAR_11 = VAR_1->msg_bufc + VAR_1->msg_bufx;
 for (VAR_5 = VAR_8 = VAR_9 = 0; VAR_11 != VAR_1->msg_bufc + VAR_1->msg_bufx - 1; ++VAR_11) {
  if (VAR_11 >= VAR_1->msg_bufc + VAR_1->msg_size)
   VAR_11 = VAR_1->msg_bufc;
  VAR_13 = *VAR_11;

  if (VAR_9) {
   if (VAR_13 == '>')
    VAR_8 = VAR_9 = 0;
   continue;
  }
  if (VAR_8 && VAR_13 == '<') {
   VAR_9 = 1;
   continue;
  }
  if (VAR_13 == '\0')
   continue;
  VAR_8 = (VAR_13 == '\n');
  VAR_10[VAR_5++] = VAR_13;





  if (VAR_5 == (VAR_6 - 2))
   break;
 }
 if (!VAR_8)
  VAR_10[VAR_5++] = '\n';
 VAR_10[VAR_5++] = 0;

 if (VAR_3 >= VAR_5) {
  VAR_12 = VAR_10;
  VAR_14 = VAR_5;
 } else {
  VAR_12 = VAR_10 + VAR_5 - VAR_3;
  VAR_14 = VAR_3;
 }

 FUNC_1();

 VAR_7 = FUNC_2(VAR_12, VAR_2, VAR_14);
 if (!VAR_7)
  *VAR_4 = VAR_14;

 FUNC_4(VAR_10, VAR_6);
 return (VAR_7);
}
