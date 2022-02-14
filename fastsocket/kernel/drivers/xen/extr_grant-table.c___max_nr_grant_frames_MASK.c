
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gnttab_query_size {scalar_t__ status; unsigned int max_nr_frames; int dom; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct gnttab_query_size*,int) ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 struct gnttab_query_size VAR_3;
 int VAR_4;

 VAR_3.dom = VAR_0;

 VAR_4 = FUNC_0(VAR_2, &VAR_3, 1);
 if ((VAR_4 < 0) || (VAR_3.status != VAR_1))
  return 4;

 return VAR_3.max_nr_frames;
}
