
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {scalar_t__ private_data; } ;
struct TYPE_2__ {int applid; } ;
struct capidev {int recvqueue; int recvwait; TYPE_1__ ap; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned int
FUNC_2(struct file *VAR_5, poll_table * VAR_6)
{
 struct capidev *VAR_7 = (struct capidev *)VAR_5->private_data;
 unsigned int VAR_8 = 0;

 if (!VAR_7->ap.applid)
  return VAR_0;

 FUNC_0(VAR_5, &(VAR_7->recvwait), VAR_6);
 VAR_8 = VAR_2 | VAR_4;
 if (!FUNC_1(&VAR_7->recvqueue))
  VAR_8 |= VAR_1 | VAR_3;
 return VAR_8;
}
