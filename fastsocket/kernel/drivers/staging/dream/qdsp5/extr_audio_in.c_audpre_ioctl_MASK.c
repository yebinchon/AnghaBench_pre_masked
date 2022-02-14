
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct file {struct audio_in* private_data; } ;
struct audio_in {int agc; int ns; int iir; int lock; } ;
typedef int enable_mask ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct audio_in*,int) ;
 int FUNC_1 (struct audio_in*,int) ;
 int FUNC_2 (struct audio_in*,int) ;
 int FUNC_3 (int*,void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static long FUNC_7(struct file *VAR_8, unsigned int VAR_9, unsigned long VAR_10)
{
 struct audio_in *VAR_11 = VAR_8->private_data;
 int VAR_12 = 0, VAR_13;
 uint16_t VAR_14;




 FUNC_4(&VAR_11->lock);
 switch (VAR_9) {
 case 131: {
  if (FUNC_3(&VAR_14, (void *) VAR_10,
    sizeof(VAR_14)))
   goto out_fault;

  VAR_13 = (VAR_14 & VAR_0) ? 1 : 0;
  FUNC_0(VAR_11, VAR_13);
  VAR_13 = (VAR_14 & VAR_6) ? 1 : 0;
  FUNC_1(VAR_11, VAR_13);
  VAR_13 = (VAR_14 & VAR_4) ? 1 : 0;
  FUNC_2(VAR_11, VAR_13);
  break;
 }
 case 130: {
  if (FUNC_3(&VAR_11->agc, (void *) VAR_10,
    sizeof(VAR_11->agc)))
   goto out_fault;






  break;
 }
 case 129: {
  if (FUNC_3(&VAR_11->ns, (void *) VAR_10,
    sizeof(VAR_11->ns)))
   goto out_fault;






  break;
 }
 case 128: {
  if (FUNC_3(&VAR_11->iir, (void *) VAR_10,
    sizeof(VAR_11->iir)))
   goto out_fault;







  break;
 }
 default:
  VAR_12 = -VAR_3;
 }

 goto out;

out_fault:
 VAR_12 = -VAR_2;
out:
 FUNC_5(&VAR_11->lock);
 return VAR_12;
}
