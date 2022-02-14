
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {unsigned long long resync_max; unsigned long long resync_min; scalar_t__ ro; int recovery_wait; scalar_t__ chunk_sectors; int recovery; } ;
typedef size_t ssize_t ;
typedef unsigned long long sector_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long long*) ;
 scalar_t__ FUNC_1 (unsigned long long,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t
FUNC_5(struct mddev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 if (FUNC_2(VAR_5, "max", 3) == 0)
  VAR_4->resync_max = VAR_3;
 else {
  unsigned long long VAR_7;
  if (FUNC_0(VAR_5, 10, &VAR_7))
   return -VAR_1;
  if (VAR_7 < VAR_4->resync_min)
   return -VAR_1;
  if (VAR_7 < VAR_4->resync_max &&
      VAR_4->ro == 0 &&
      FUNC_3(VAR_2, &VAR_4->recovery))
   return -VAR_0;


  if (VAR_4->chunk_sectors) {
   sector_t VAR_8 = VAR_7;
   if (FUNC_1(VAR_8, VAR_4->chunk_sectors))
    return -VAR_1;
  }
  VAR_4->resync_max = VAR_7;
 }
 FUNC_4(&VAR_4->recovery_wait);
 return VAR_6;
}
