
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_iovec {int dummy; } ;
struct sg_io_hdr {char interface_id; scalar_t__ cmd_len; int dxfer_len; int dxfer_direction; int iovec_count; int duration; int dxferp; } ;
struct request_queue {int dummy; } ;
struct request {char* sense; scalar_t__ retries; scalar_t__ sense_len; struct bio* bio; } ;
struct iovec {int dummy; } ;
struct gendisk {int dummy; } ;
struct bio {int dummy; } ;
typedef int sense ;
typedef int fmode_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_0 (struct request*,struct sg_io_hdr*,struct bio*) ;
 int FUNC_1 (struct request_queue*,struct gendisk*,struct request*,int ) ;
 scalar_t__ FUNC_2 (struct request_queue*,struct request*,struct sg_io_hdr*,int ) ;
 struct request* FUNC_3 (struct request_queue*,int ,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request_queue*,struct request*,int *,int ,size_t,int ) ;
 int FUNC_6 (struct request_queue*,struct request*,int *,struct sg_iovec*,int,size_t,int ) ;
 scalar_t__ FUNC_7 (struct sg_iovec*,int ,int const) ;
 size_t FUNC_8 (struct iovec*,int) ;
 int FUNC_9 (struct iovec*,int,size_t) ;
 unsigned long VAR_10 ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (struct sg_iovec*) ;
 struct sg_iovec* FUNC_12 (int const,int ) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (struct request_queue*) ;

__attribute__((used)) static int FUNC_15(struct request_queue *VAR_11, struct gendisk *VAR_12,
  struct sg_io_hdr *VAR_13, fmode_t VAR_14)
{
 unsigned long VAR_15;
 int VAR_16 = 0, VAR_17 = 0;
 struct request *VAR_18;
 char VAR_19[VAR_8];
 struct bio *VAR_20;

 if (VAR_13->interface_id != 'S')
  return -VAR_2;
 if (VAR_13->cmd_len > VAR_0)
  return -VAR_2;

 if (VAR_13->dxfer_len > (FUNC_14(VAR_11) << 9))
  return -VAR_3;

 if (VAR_13->dxfer_len)
  switch (VAR_13->dxfer_direction) {
  default:
   return -VAR_2;
  case 129:
   VAR_16 = 1;
   break;
  case 128:
  case 130:
   break;
  }

 VAR_18 = FUNC_3(VAR_11, VAR_16 ? VAR_9 : VAR_7, VAR_6);
 if (!VAR_18)
  return -VAR_4;

 if (FUNC_2(VAR_11, VAR_18, VAR_13, VAR_14)) {
  FUNC_4(VAR_18);
  return -VAR_1;
 }

 if (VAR_13->iovec_count) {
  const int VAR_21 = sizeof(struct sg_iovec) * VAR_13->iovec_count;
  size_t VAR_22;
  struct sg_iovec *VAR_23;

  VAR_23 = FUNC_12(VAR_21, VAR_6);
  if (!VAR_23) {
   VAR_17 = -VAR_5;
   goto out;
  }

  if (FUNC_7(VAR_23, VAR_13->dxferp, VAR_21)) {
   FUNC_11(VAR_23);
   VAR_17 = -VAR_1;
   goto out;
  }


  VAR_22 = FUNC_8((struct iovec *)VAR_23,
       VAR_13->iovec_count);
  if (VAR_13->dxfer_len < VAR_22) {
   VAR_13->iovec_count = FUNC_9((struct iovec *)VAR_23,
             VAR_13->iovec_count,
             VAR_13->dxfer_len);
   VAR_22 = VAR_13->dxfer_len;
  }

  VAR_17 = FUNC_6(VAR_11, VAR_18, ((void*)0), VAR_23, VAR_13->iovec_count,
       VAR_22, VAR_6);
  FUNC_11(VAR_23);
 } else if (VAR_13->dxfer_len)
  VAR_17 = FUNC_5(VAR_11, VAR_18, ((void*)0), VAR_13->dxferp, VAR_13->dxfer_len,
          VAR_6);

 if (VAR_17)
  goto out;

 VAR_20 = VAR_18->bio;
 FUNC_13(VAR_19, 0, sizeof(VAR_19));
 VAR_18->sense = VAR_19;
 VAR_18->sense_len = 0;
 VAR_18->retries = 0;

 VAR_15 = VAR_10;





 FUNC_1(VAR_11, VAR_12, VAR_18, 0);

 VAR_13->duration = FUNC_10(VAR_10 - VAR_15);

 return FUNC_0(VAR_18, VAR_13, VAR_20);
out:
 FUNC_4(VAR_18);
 return VAR_17;
}
