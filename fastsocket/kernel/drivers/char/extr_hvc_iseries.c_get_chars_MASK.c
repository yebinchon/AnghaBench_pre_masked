
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct port_info {int in_end; int in_start; int * in_buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int *,int) ;
 struct port_info* VAR_3 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_4, char *VAR_5, int VAR_6)
{
 struct port_info *VAR_7;
 int VAR_8 = 0;
 unsigned long VAR_9;

 if (VAR_4 >= VAR_1)
  return -VAR_0;
 if (VAR_6 == 0)
  return 0;

 VAR_7 = &VAR_3[VAR_4];
 FUNC_1(&VAR_2, VAR_9);

 if (VAR_7->in_end == 0)
  goto done;

 VAR_8 = VAR_7->in_end - VAR_7->in_start;
 if (VAR_8 > VAR_6)
  VAR_8 = VAR_6;
 FUNC_0(VAR_5, &VAR_7->in_buf[VAR_7->in_start], VAR_8);
 VAR_7->in_start += VAR_8;
 if (VAR_7->in_start == VAR_7->in_end) {
  VAR_7->in_start = 0;
  VAR_7->in_end = 0;
 }
done:
 FUNC_2(&VAR_2, VAR_9);
 return VAR_8;
}
