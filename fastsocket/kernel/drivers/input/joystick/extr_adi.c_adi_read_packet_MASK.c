
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int dummy; } ;
struct adi_port {struct gameport* gameport; struct adi* adi; } ;
struct adi {int ret; unsigned char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (struct gameport*) ;
 int FUNC_1 (struct gameport*,int ) ;
 int FUNC_2 (struct gameport*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(struct adi_port *VAR_3)
{
 struct adi *VAR_4 = VAR_3->adi;
 struct gameport *VAR_5 = VAR_3->gameport;
 unsigned char VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11[2], VAR_12[2], VAR_13;
 unsigned long VAR_14;

 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  VAR_4[VAR_13].ret = -1;
  VAR_11[VAR_13] = FUNC_1(VAR_5, VAR_1);
  VAR_12[VAR_13] = 0;
 }

 FUNC_4(VAR_14);

 FUNC_2(VAR_5);
 VAR_7 = VAR_10 = FUNC_0(VAR_5);

 do {
  VAR_6 = VAR_7;
  VAR_8 = VAR_6 ^ (VAR_7 = VAR_9 = FUNC_0(VAR_5));
  for (VAR_13 = 0; VAR_13 < 2; VAR_13++, VAR_8 >>= 2, VAR_9 >>= 2) {
   VAR_11[VAR_13]--;
   if ((VAR_8 & 0x30) && VAR_12[VAR_13]) {
    if ((VAR_8 & 0x30) < 0x30 && VAR_4[VAR_13].ret < VAR_0 && VAR_11[VAR_13] > 0) {
     VAR_4[VAR_13].data[++VAR_4[VAR_13].ret] = VAR_8;
     VAR_11[VAR_13] = FUNC_1(VAR_5, VAR_2);
    } else VAR_11[VAR_13] = 0;
   } else if (!(VAR_9 & 0x30)) VAR_12[VAR_13] = 1;
  }
 } while (VAR_11[0] > 0 || VAR_11[1] > 0);

 FUNC_3(VAR_14);

 return;
}
