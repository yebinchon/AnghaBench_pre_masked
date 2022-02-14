
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stb0899_state {int verbose; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stb0899_state*,int) ;

__attribute__((used)) static enum stb0899_status FUNC_3(struct stb0899_state *VAR_3, int VAR_4)
{
 int VAR_5 = 0, VAR_6;

 do {
  VAR_6 = FUNC_2(VAR_3, 1);
  VAR_5++;
  FUNC_1(1);

 } while ((!VAR_6) && (VAR_5 < VAR_4));

 if (VAR_6) {
  FUNC_0(VAR_3->verbose, VAR_2, 1, "---------->DVB-S2 FEC LOCK !");
  return VAR_0;
 } else {
  return VAR_1;
 }
}
