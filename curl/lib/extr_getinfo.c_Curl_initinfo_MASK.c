
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PureInfo {int filetime; char* conn_primary_ip; char* conn_local_ip; scalar_t__ conn_protocol; scalar_t__ conn_scheme; scalar_t__ conn_local_port; scalar_t__ conn_primary_port; int * wouldredirect; int * contenttype; scalar_t__ numconnects; scalar_t__ httpauthavail; scalar_t__ proxyauthavail; scalar_t__ request_size; scalar_t__ header_size; int timecond; scalar_t__ httpversion; scalar_t__ httpproxycode; scalar_t__ httpcode; } ;
struct Progress {int is_t_startransfer_set; scalar_t__ t_redirect; scalar_t__ timespent; scalar_t__ t_starttransfer; scalar_t__ t_pretransfer; scalar_t__ t_appconnect; scalar_t__ t_connect; scalar_t__ t_nslookup; } ;
struct Curl_easy {struct PureInfo info; struct Progress progress; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (struct Curl_easy*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

CURLcode FUNC_2(struct Curl_easy *VAR_2)
{
  struct Progress *VAR_3 = &VAR_2->progress;
  struct PureInfo *VAR_4 = &VAR_2->info;

  VAR_3->t_nslookup = 0;
  VAR_3->t_connect = 0;
  VAR_3->t_appconnect = 0;
  VAR_3->t_pretransfer = 0;
  VAR_3->t_starttransfer = 0;
  VAR_3->timespent = 0;
  VAR_3->t_redirect = 0;
  VAR_3->is_t_startransfer_set = 0;

  VAR_4->httpcode = 0;
  VAR_4->httpproxycode = 0;
  VAR_4->httpversion = 0;
  VAR_4->filetime = -1;
  VAR_4->timecond = VAR_1;

  VAR_4->header_size = 0;
  VAR_4->request_size = 0;
  VAR_4->proxyauthavail = 0;
  VAR_4->httpauthavail = 0;
  VAR_4->numconnects = 0;

  FUNC_1(VAR_4->contenttype);
  VAR_4->contenttype = ((void*)0);

  FUNC_1(VAR_4->wouldredirect);
  VAR_4->wouldredirect = ((void*)0);

  VAR_4->conn_primary_ip[0] = '\0';
  VAR_4->conn_local_ip[0] = '\0';
  VAR_4->conn_primary_port = 0;
  VAR_4->conn_local_port = 0;

  VAR_4->conn_scheme = 0;
  VAR_4->conn_protocol = 0;




  return VAR_0;
}
