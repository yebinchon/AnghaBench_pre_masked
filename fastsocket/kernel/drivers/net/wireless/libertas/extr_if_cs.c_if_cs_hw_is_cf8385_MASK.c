
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__ manf_id; scalar_t__ card_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct pcmcia_device *VAR_2)
{
 return (VAR_2->manf_id == VAR_1 &&
  VAR_2->card_id == VAR_0);
}
