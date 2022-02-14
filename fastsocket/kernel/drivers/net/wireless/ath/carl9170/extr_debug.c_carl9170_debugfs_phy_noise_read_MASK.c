
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar9170 {int * noise; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,size_t,char*,int ,int ) ;
 int FUNC_1 (struct ar9170*) ;

__attribute__((used)) static char *FUNC_2(struct ar9170 *VAR_0, char *VAR_1,
          size_t VAR_2, ssize_t *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4) {
  *VAR_3 = VAR_4;
  return VAR_1;
 }

 FUNC_0(VAR_1, *VAR_3, VAR_2, "Chain 0: %10d dBm, ext. chan.:%10d dBm\n",
     VAR_0->noise[0], VAR_0->noise[2]);
 FUNC_0(VAR_1, *VAR_3, VAR_2, "Chain 2: %10d dBm, ext. chan.:%10d dBm\n",
     VAR_0->noise[1], VAR_0->noise[3]);

 return VAR_1;
}
