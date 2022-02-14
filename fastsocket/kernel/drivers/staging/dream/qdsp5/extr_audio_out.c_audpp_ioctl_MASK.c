
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct file {struct audio* private_data; } ;
struct audio {int adrc; int eq; int iir; int lock; } ;
typedef int enable_mask ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct audio*,int) ;
 int FUNC_1 (struct audio*,int) ;
 int FUNC_2 (struct audio*,int) ;
 int FUNC_3 (int*,void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static long FUNC_6(struct file *VAR_5, unsigned int VAR_6, unsigned long VAR_7)
{
 struct audio *VAR_8 = VAR_5->private_data;
 int VAR_9 = 0, VAR_10;
 uint16_t VAR_11;

 FUNC_4(&VAR_8->lock);
 switch (VAR_6) {
 case 131:
  if (FUNC_3(&VAR_11, (void *) VAR_7, sizeof(VAR_11)))
   goto out_fault;

  VAR_10 = (VAR_11 & VAR_0)? 1 : 0;
  FUNC_0(VAR_8, VAR_10);
  VAR_10 = (VAR_11 & VAR_3)? 1 : 0;
  FUNC_1(VAR_8, VAR_10);
  VAR_10 = (VAR_11 & VAR_4)? 1 : 0;
  FUNC_2(VAR_8, VAR_10);
  break;

 case 130:
  if (FUNC_3(&VAR_8->adrc, (void*) VAR_7, sizeof(VAR_8->adrc)))
   goto out_fault;
  break;

 case 129:
  if (FUNC_3(&VAR_8->eq, (void*) VAR_7, sizeof(VAR_8->eq)))
   goto out_fault;
  break;

 case 128:
  if (FUNC_3(&VAR_8->iir, (void*) VAR_7, sizeof(VAR_8->iir)))
   goto out_fault;
  break;

 default:
  VAR_9 = -VAR_2;
 }

 goto out;

 out_fault:
 VAR_9 = -VAR_1;
 out:
 FUNC_5(&VAR_8->lock);
 return VAR_9;
}
