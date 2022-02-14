
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cardstate {TYPE_1__* ops; int dev; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* write_cmd ) (struct cardstate*,char*,size_t,int *) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t,int ) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;
 int FUNC_5 (struct cardstate*,char*,size_t,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct cardstate *VAR_0, const char *VAR_1, int VAR_2,
    int VAR_3, gfp_t VAR_4)
{
 size_t VAR_5, VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;

 VAR_5 = FUNC_4(VAR_1);
 VAR_6 = 11 + VAR_5;
 if (FUNC_6(VAR_6 <= VAR_5)) {
  FUNC_0(VAR_0->dev, "integer overflow in buflen\n");
  return;
 }

 VAR_8 = FUNC_2(VAR_6, VAR_4);
 if (FUNC_6(!VAR_8)) {
  FUNC_0(VAR_0->dev, "out of memory\n");
  return;
 }

 VAR_7 = VAR_8 + 9;
 VAR_9 = VAR_7 + VAR_5;
 FUNC_3(VAR_7, VAR_1, VAR_5);

 if (VAR_2 > 0 && VAR_2 <= 65535) {
  do {
   *--VAR_7 = '0' + VAR_2 % 10;
   VAR_2 /= 10;
   ++VAR_5;
  } while (VAR_2);
 }

 VAR_5 += 2;
 *--VAR_7 = 'T';
 *--VAR_7 = 'A';

 if (VAR_3) {
  VAR_5 += 4;
  *--VAR_7 = '(';
  *--VAR_7 = 0x10;
  *VAR_9++ = 0x10;
  *VAR_9++ = ')';
 }

 VAR_0->ops->write_cmd(VAR_0, VAR_7, VAR_5, ((void*)0));
 FUNC_1(VAR_8);
}
