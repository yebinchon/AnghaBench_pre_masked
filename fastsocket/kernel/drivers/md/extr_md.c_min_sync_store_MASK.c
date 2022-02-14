
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long long resync_max; unsigned long long resync_min; scalar_t__ chunk_sectors; int recovery; } ;
typedef size_t ssize_t ;
typedef unsigned long long sector_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;
 scalar_t__ FUNC_1 (unsigned long long,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static ssize_t
FUNC_3(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 unsigned long long VAR_6;
 if (FUNC_0(VAR_4, 10, &VAR_6))
  return -VAR_1;
 if (VAR_6 > VAR_3->resync_max)
  return -VAR_1;
 if (FUNC_2(VAR_2, &VAR_3->recovery))
  return -VAR_0;


 if (VAR_3->chunk_sectors) {
  sector_t VAR_7 = VAR_6;
  if (FUNC_1(VAR_7, VAR_3->chunk_sectors))
   return -VAR_1;
 }
 VAR_3->resync_min = VAR_6;

 return VAR_5;
}
