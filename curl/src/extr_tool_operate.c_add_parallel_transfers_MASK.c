
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_transfer {void* added; int curl; struct per_transfer* next; } ;
struct GlobalConfig {scalar_t__ parallel_max; } ;
typedef scalar_t__ CURLcode ;
typedef int CURLSH ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct GlobalConfig*,int *,int*) ;
 int FUNC_1 (int ,int ,struct per_transfer*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct GlobalConfig*,struct per_transfer*) ;
 struct per_transfer* VAR_8 ;
 struct per_transfer* VAR_9 ;

__attribute__((used)) static CURLcode FUNC_4(struct GlobalConfig *VAR_10,
                                       CURLM *VAR_11,
                                       CURLSH *VAR_12,
                                       bool *VAR_13,
                                       bool *VAR_14)
{
  struct per_transfer *VAR_15;
  CURLcode VAR_16 = VAR_0;
  CURLMcode VAR_17;
  *VAR_14 = VAR_5;
  *VAR_13 = VAR_5;
  VAR_16 = FUNC_0(VAR_10, VAR_12, VAR_14);
  if(VAR_16 || !*VAR_14)
    return VAR_16;
  for(VAR_15 = VAR_8; VAR_15 && (VAR_7 < VAR_10->parallel_max);
      VAR_15 = VAR_15->next) {
    bool VAR_18 = VAR_5;
    if(VAR_15->added)

      continue;

    VAR_16 = FUNC_3(VAR_10, VAR_15);
    if(VAR_16)
      break;

    (void)FUNC_1(VAR_15->curl, VAR_2, VAR_15);
    (void)FUNC_1(VAR_15->curl, VAR_4, VAR_9);
    (void)FUNC_1(VAR_15->curl, VAR_3, VAR_15);

    VAR_17 = FUNC_2(VAR_11, VAR_15->curl);
    if(VAR_17)
      return VAR_1;

    VAR_16 = FUNC_0(VAR_10, VAR_12, &VAR_18);
    if(VAR_16)
      return VAR_16;
    VAR_15->added = VAR_6;
    VAR_7++;
    *VAR_14 = VAR_6;
  }
  *VAR_13 = VAR_15 ? VAR_6 : VAR_5;
  return VAR_0;
}
