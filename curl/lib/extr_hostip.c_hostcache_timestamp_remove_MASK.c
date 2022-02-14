
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostcache_prune_data {scalar_t__ now; scalar_t__ cache_timeout; } ;
struct Curl_dns_entry {scalar_t__ timestamp; } ;



__attribute__((used)) static int
FUNC_0(void *VAR_0, void *VAR_1)
{
  struct hostcache_prune_data *VAR_2 =
    (struct hostcache_prune_data *) VAR_0;
  struct Curl_dns_entry *VAR_3 = (struct Curl_dns_entry *) VAR_1;

  return (0 != VAR_3->timestamp)
    && (VAR_2->now - VAR_3->timestamp >= VAR_2->cache_timeout);
}
