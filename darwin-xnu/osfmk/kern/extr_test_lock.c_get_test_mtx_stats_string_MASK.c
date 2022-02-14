
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct lck_mtx_test_stats_elem {int lock; int min; int max; int avg; int tot; int samples; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct lck_mtx_test_stats_elem* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int,char*,...) ;

int
FUNC_5(
 char* VAR_2,
 int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "\n");
 VAR_3 -= VAR_5;
 VAR_4 += VAR_5;

 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct lck_mtx_test_stats_elem* VAR_7 = &VAR_1[VAR_6];

  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "{ ");
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  FUNC_1(&VAR_7->lock);
  uint64_t VAR_8;

  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "samples %llu, ", VAR_7->samples);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  FUNC_0(VAR_7->tot, &VAR_8);
  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "tot %llu ns, ", VAR_8);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  FUNC_0(VAR_7->avg, &VAR_8);
  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "avg %llu ns, ", VAR_8);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  FUNC_0(VAR_7->max, &VAR_8);
  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "max %llu ns, ", VAR_8);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  FUNC_0(VAR_7->min, &VAR_8);
  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "min %llu ns", VAR_8);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  FUNC_2(&VAR_7->lock);

  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, " } ");
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  VAR_5 = FUNC_3(VAR_6, &VAR_2[VAR_4], VAR_3);
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;

  VAR_5 = FUNC_4(&VAR_2[VAR_4], VAR_3, "\n");
  VAR_3 -= VAR_5;
  VAR_4 += VAR_5;
 }

 return VAR_4;
}
