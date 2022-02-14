
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct hostcache_prune_data {long cache_timeout; int now; } ;
struct curl_hash {int dummy; } ;


 int FUNC_0 (struct curl_hash*,void*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct curl_hash *VAR_1, long VAR_2, time_t VAR_3)
{
  struct hostcache_prune_data VAR_4;

  VAR_4.cache_timeout = VAR_2;
  VAR_4.now = VAR_3;

  FUNC_0(VAR_1,
                                 (void *) &VAR_4,
                                 VAR_0);
}
