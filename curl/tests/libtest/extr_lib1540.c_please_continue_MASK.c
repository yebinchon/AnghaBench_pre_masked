
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transfer_status {int halted; int please; int easy; } ;
typedef int curl_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(void *VAR_2,
                           curl_off_t VAR_3,
                           curl_off_t VAR_4,
                           curl_off_t VAR_5,
                           curl_off_t VAR_6)
{
  struct transfer_status *VAR_7 = (struct transfer_status *)VAR_2;
  (void)VAR_3;
  (void)VAR_4;
  (void)VAR_5;
  (void)VAR_6;
  if(VAR_7->halted) {
    VAR_7->please++;
    if(VAR_7->please == 2) {

      FUNC_0(VAR_7->easy, VAR_0);
    }
  }
  FUNC_1(VAR_1, "xferinfo: paused %d\n", VAR_7->halted);
  return 0;
}
