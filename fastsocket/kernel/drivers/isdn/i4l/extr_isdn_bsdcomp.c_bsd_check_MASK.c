
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsd_db {int in_count; int checkpoint; int bytes_out; scalar_t__ max_ent; scalar_t__ maxmaxcode; unsigned int ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct bsd_db*) ;

__attribute__((used)) static int FUNC_1 (struct bsd_db *VAR_4)
{
    unsigned int VAR_5;

    if (VAR_4->in_count >= VAR_4->checkpoint)
      {

 if (VAR_4->in_count >= VAR_1 || VAR_4->bytes_out >= VAR_1)
   {
     VAR_4->in_count -= (VAR_4->in_count >> 2);
     VAR_4->bytes_out -= (VAR_4->bytes_out >> 2);
   }

 VAR_4->checkpoint = VAR_4->in_count + VAR_0;

 if (VAR_4->max_ent >= VAR_4->maxmaxcode)
   {
     VAR_5 = VAR_4->in_count << VAR_3;
     if (VAR_4->bytes_out != 0)
       {
  VAR_5 /= VAR_4->bytes_out;
       }

     if (VAR_5 < VAR_4->ratio || VAR_5 < 1 * VAR_2)
       {
  FUNC_0 (VAR_4);
  return 1;
       }
     VAR_4->ratio = VAR_5;
   }
      }
    return 0;
}
