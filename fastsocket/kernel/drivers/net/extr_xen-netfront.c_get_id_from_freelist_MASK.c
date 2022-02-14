
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union skb_entry {unsigned int link; } ;



__attribute__((used)) static unsigned short FUNC_0(unsigned *VAR_0,
        union skb_entry *VAR_1)
{
 unsigned int VAR_2 = *VAR_0;
 *VAR_0 = VAR_1[VAR_2].link;
 return VAR_2;
}
