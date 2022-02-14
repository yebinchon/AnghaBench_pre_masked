
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sid_kind; int sid_authcount; int* sid_authority; int* sid_authorities; } ;
typedef TYPE_1__ ntsid_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*,size_t) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_2, ntsid_t *VAR_3)
{
 size_t VAR_4 = FUNC_2(VAR_2, VAR_1);

 if (VAR_4 == VAR_1 || VAR_2[VAR_4-1] != '@')
  return (VAR_0);

 FUNC_0(VAR_3, sizeof(ntsid_t));
 VAR_3->sid_kind = 1;
 VAR_3->sid_authcount = 1;
 if (!FUNC_1(VAR_2, "OWNER@")) {

  VAR_3->sid_authority[5] = 3;
  VAR_3->sid_authorities[0] = 0;
 } else if (!FUNC_1(VAR_2, "GROUP@")) {

  VAR_3->sid_authority[5] = 3;
  VAR_3->sid_authorities[0] = 1;
 } else if (!FUNC_1(VAR_2, "EVERYONE@")) {

  VAR_3->sid_authority[5] = 1;
  VAR_3->sid_authorities[0] = 0;
 } else if (!FUNC_1(VAR_2, "INTERACTIVE@")) {

  VAR_3->sid_authority[5] = 5;
  VAR_3->sid_authorities[0] = 4;
 } else if (!FUNC_1(VAR_2, "NETWORK@")) {

  VAR_3->sid_authority[5] = 5;
  VAR_3->sid_authorities[0] = 2;
 } else if (!FUNC_1(VAR_2, "DIALUP@")) {

  VAR_3->sid_authority[5] = 5;
  VAR_3->sid_authorities[0] = 1;
 } else if (!FUNC_1(VAR_2, "BATCH@")) {

  VAR_3->sid_authority[5] = 5;
  VAR_3->sid_authorities[0] = 3;
 } else if (!FUNC_1(VAR_2, "ANONYMOUS@")) {

  VAR_3->sid_authority[5] = 5;
  VAR_3->sid_authorities[0] = 7;
 } else if (!FUNC_1(VAR_2, "AUTHENTICATED@")) {

  VAR_3->sid_authority[5] = 5;
  VAR_3->sid_authorities[0] = 11;
 } else if (!FUNC_1(VAR_2, "SERVICE@")) {

  VAR_3->sid_authority[5] = 5;
  VAR_3->sid_authorities[0] = 6;
 } else {

  VAR_3->sid_authority[5] = 0;
  VAR_3->sid_authorities[0] = 0;
 }
 return (0);
}
