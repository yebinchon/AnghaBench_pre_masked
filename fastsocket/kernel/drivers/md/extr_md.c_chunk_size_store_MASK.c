
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {unsigned long new_chunk_sectors; unsigned long chunk_sectors; scalar_t__ reshape_position; TYPE_1__* pers; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* check_reshape ) (struct mddev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (char const*,char**,int) ;
 int FUNC_1 (struct mddev*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_3, const char *VAR_4, size_t VAR_5)
{
 char *VAR_6;
 unsigned long VAR_7 = FUNC_0(VAR_4, &VAR_6, 10);

 if (!*VAR_4 || (*VAR_6 && *VAR_6 != '\n'))
  return -VAR_1;

 if (VAR_3->pers) {
  int VAR_8;
  if (VAR_3->pers->check_reshape == ((void*)0))
   return -VAR_0;
  VAR_3->new_chunk_sectors = VAR_7 >> 9;
  VAR_8 = VAR_3->pers->check_reshape(VAR_3);
  if (VAR_8) {
   VAR_3->new_chunk_sectors = VAR_3->chunk_sectors;
   return VAR_8;
  }
 } else {
  VAR_3->new_chunk_sectors = VAR_7 >> 9;
  if (VAR_3->reshape_position == VAR_2)
   VAR_3->chunk_sectors = VAR_7 >> 9;
 }
 return VAR_5;
}
