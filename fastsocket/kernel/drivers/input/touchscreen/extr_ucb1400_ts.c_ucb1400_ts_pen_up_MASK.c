
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short FUNC_0 (struct snd_ac97*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct snd_ac97 *VAR_3)
{
 unsigned short VAR_4 = FUNC_0(VAR_3, VAR_0);

 return VAR_4 & (VAR_2 | VAR_1);
}
