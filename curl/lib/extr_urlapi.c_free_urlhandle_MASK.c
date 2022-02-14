
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_URL {int temppath; int scratch; int fragment; int query; int path; int port; int zoneid; int host; int options; int password; int user; int scheme; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct Curl_URL *VAR_0)
{
  FUNC_0(VAR_0->scheme);
  FUNC_0(VAR_0->user);
  FUNC_0(VAR_0->password);
  FUNC_0(VAR_0->options);
  FUNC_0(VAR_0->host);
  FUNC_0(VAR_0->zoneid);
  FUNC_0(VAR_0->port);
  FUNC_0(VAR_0->path);
  FUNC_0(VAR_0->query);
  FUNC_0(VAR_0->fragment);
  FUNC_0(VAR_0->scratch);
  FUNC_0(VAR_0->temppath);
}
