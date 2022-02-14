
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct httprequest {scalar_t__ upgrade_request; scalar_t__ upgrade; scalar_t__ done_processing; scalar_t__ connect_port; scalar_t__ callcount; scalar_t__ prot_version; int rcmd; scalar_t__ writedelay; scalar_t__ skip; void* ntlm; void* digest; scalar_t__ cl; void* auth; void* auth_req; int open; void* connect_request; scalar_t__ partno; int testno; scalar_t__ offset; scalar_t__ checkindex; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct httprequest *VAR_4)
{
  VAR_4->checkindex = 0;
  VAR_4->offset = 0;
  VAR_4->testno = VAR_0;
  VAR_4->partno = 0;
  VAR_4->connect_request = VAR_1;
  VAR_4->open = VAR_3;
  VAR_4->auth_req = VAR_1;
  VAR_4->auth = VAR_1;
  VAR_4->cl = 0;
  VAR_4->digest = VAR_1;
  VAR_4->ntlm = VAR_1;
  VAR_4->skip = 0;
  VAR_4->writedelay = 0;
  VAR_4->rcmd = VAR_2;
  VAR_4->prot_version = 0;
  VAR_4->callcount = 0;
  VAR_4->connect_port = 0;
  VAR_4->done_processing = 0;
  VAR_4->upgrade = 0;
  VAR_4->upgrade_request = 0;
}
