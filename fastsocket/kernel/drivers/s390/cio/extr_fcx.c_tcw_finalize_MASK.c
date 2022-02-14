
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int tcat ;
struct tidaw {int flags; } ;
struct tcw {int flags; int tccbl; void* output_count; scalar_t__ w; void* input_count; scalar_t__ r; } ;
struct tccb_tcat {scalar_t__ count; } ;
struct tccb {int * tca; } ;


 scalar_t__ FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tidaw*,int) ;
 void* FUNC_2 (struct tccb*) ;
 int FUNC_3 (struct tccb_tcat*,int ,int) ;
 int FUNC_4 (struct tccb*) ;
 struct tidaw* FUNC_5 (struct tcw*) ;
 struct tccb* FUNC_6 (struct tcw*) ;

void FUNC_7(struct tcw *VAR_2, int VAR_3)
{
 struct tidaw *VAR_4;
 struct tccb *VAR_5;
 struct tccb_tcat *VAR_6;
 u32 VAR_7;


 VAR_4 = FUNC_5(VAR_2);
 if (VAR_3 > 0)
  VAR_4[VAR_3 - 1].flags |= VAR_1;

 VAR_5 = FUNC_6(VAR_2);
 VAR_6 = (struct tccb_tcat *) &VAR_5->tca[FUNC_4(VAR_5)];
 FUNC_3(VAR_6, 0, sizeof(VAR_6));

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_2->w && (VAR_2->flags & VAR_0))
  VAR_7 += FUNC_1(VAR_4, VAR_3);
 if (VAR_2->r)
  VAR_2->input_count = VAR_7;
 else if (VAR_2->w)
  VAR_2->output_count = VAR_7;
 VAR_6->count = FUNC_0(VAR_7, 4) + 4;

 VAR_2->tccbl = (sizeof(struct tccb) + FUNC_4(VAR_5) +
        sizeof(struct tccb_tcat) - 20) >> 2;
}
