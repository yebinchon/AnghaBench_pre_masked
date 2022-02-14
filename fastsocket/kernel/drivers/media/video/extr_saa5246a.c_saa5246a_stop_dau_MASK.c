
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa5246a_device {int* is_searching; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct saa5246a_device*,int ,unsigned char,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct saa5246a_device *VAR_11,
    unsigned char VAR_12)
{
 if (VAR_12 >= VAR_3)
  return -VAR_1;
 if (FUNC_0(VAR_11, VAR_10,

  VAR_6 |
  VAR_12 << 4 |
  VAR_4 |
  VAR_5,

  VAR_8 |
  VAR_7 |
  VAR_9,

  VAR_0))
 {
  return -VAR_2;
 }
 VAR_11->is_searching[VAR_12] = 0;
 return 0;
}
